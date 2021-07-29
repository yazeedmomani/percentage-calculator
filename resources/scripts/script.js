console.log("This app calculates percentages.");
console.log('100% = 1920 by default.');
console.log('Write "maximum = number;" to change the value of 100%.');
console.log('Write "calculate()" to start the app.');
console.log("Reload the page to clear the console. (Ctrl + R)");
console.log('***********************************************************************************');
console.log('');

let maximum = 1920;

function calculate(){
    let lengthInPexels = prompt('Insert a length in pexels or write "quit" to quit the app.');

    while(lengthInPexels !== "quit"){
        let lengthInPercentage = lengthInPexels * 100 / maximum;

        console.log(`${lengthInPexels} is ${lengthInPercentage}% of ${maximum}`)
        lengthInPexels = prompt('Insert a length in pexels or write "quit" to quit the app.');
    };

    console.log('');
    console.log('***********************************************************************************');
    console.log("                                  You Quit");
    console.log('***********************************************************************************');
};