/**
 * Flattening multidimensional arrays
 *
 * Flattening arrays is trivial with Spread operator:
 */

const arr = [11, [22, 33], [44, 55], 66];
const flatArr = [].concat(...arr); //=> [11, 22, 33, 44, 55, 66]
