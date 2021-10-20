const capitalize = (str) => {
  const newStr = str.replace(/(^\w|\s\w)/g, (m) => m.toUpperCase())
  return newStr
}

const captialize2ndApproach = (str) => {
  return str.split(" ").map(word => word.charAt(0).toUpperCase() + word.slice(1)).join(" ");
}

console.log(capitalize('peter parker')) // Expected output "Peter Parker"
console.log(capitalize('hack tober fest')) // "Hack Tober Fest"
