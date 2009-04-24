//
//  AFSet.h
//  AFCalendarView
//
//  Created by Keith Duncan on 27/03/2007.
//  Copyright 2007 thirty-three. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
	@function
	@abstract	This returns whether or not it is safe to use <tt>-objectAtIndex:</tt> for a given index.
 */
NS_INLINE BOOL AFArrayContainsIndex(NSArray *array, NSUInteger index) {
	return NSLocationInRange(index, NSMakeRange(0, [array count]));
}

/*!
	@function
	@abstract	This returns nil of the index isn't present in the array.
 */
NS_INLINE id AFSafeObjectAtIndex(NSArray *array, NSUInteger index) {
	return (AFArrayContainsIndex(array, index) ? [array objectAtIndex:index] : nil);
}

/*!
	@category
 */
@interface NSArray (AFAdditions)

/*!
	@method
 */
- (NSArray *)arrayByAddingObjectsFromSet:(NSSet *)set;

/*!
	@method
 */
- (NSArray *)subarrayFromIndex:(NSUInteger)index;

/*!
	@method
	@abstract	This returns the only object in the array, or nil if the receiver contains more than one object.
 */
- (id)onlyObject;

@end