function foo(){
    return new Promise(resolve =>{
        setTimeout(() => resolve('bar'), 3000);
    });
}

async function asyncExample(){
    await foo().then(result => console.log(result));
    console.log('show this after waiting for the first function to complete.');
}
asyncExample();


//icannotunderstand this