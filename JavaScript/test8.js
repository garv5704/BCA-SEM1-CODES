// set interval...............

let counter = 0;
let interval = setInterval(function(){
    counter++;
    if (counter > 10){
        console.log('This is how 10 seconds have passed');
        clearInterval(interval);
        return;
    }
    console.log('one second passed..');
}, 1000);