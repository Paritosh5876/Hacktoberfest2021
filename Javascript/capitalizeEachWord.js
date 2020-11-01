const capitalizeTwo = (str) => {
  const newStr = str.replace(/(^\w|\s\w)/g, (m) => m.toUpperCase())
  return newStr
}

console.log(capitalize('peter parker')) // Expected output "Peter Parker"
console.log(capitalize('hack tober fest')) // "Hack Tober Fest"
