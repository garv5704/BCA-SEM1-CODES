let today = new Date();
let hours = today.getHours().toString().padStart(2, '0');
let minutes = today.getMinutes().toString().padStart(2, '0');
let seconds = today.getSeconds().toString().padStart(2, '0');

console.log(`current time is ${hours}:${minutes}:${seconds}`);