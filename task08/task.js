// 1. Write a JavaScript program to display numbers as worlds using ASCII code.
// example: [104, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100]
const asciiArray = [104, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100];
const word = String.fromCharCode(...asciiArray);
console.log(word);
