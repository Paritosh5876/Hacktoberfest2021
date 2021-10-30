/**
 * 2. Removing duplicate items from an array
 *
 * By using ES2015 Sets along with the Spread operator, you can easily remove
 * duplicate items from an array:
 */

const removeDuplicateItems = arr => [...new Set(arr)];

removeDuplicateItems([42, 'foo', 42, 'foo', true, true]); //=> [42, "foo", true]
