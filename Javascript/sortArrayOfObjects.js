//sort an array of objects by the values of the object’s properties.
let employees = [
    {
        firstName: 'John',
        lastName: 'Doe',
        age: 27,
        joinedDate: 'December 15, 2017'
    },

    {
        firstName: 'Ana',
        lastName: 'Rosy',
        age: 25,
        joinedDate: 'January 15, 2019'
    },

    {
        firstName: 'Zion',
        lastName: 'Albert',
        age: 30,
        joinedDate: 'February 15, 2011'
    }
];
//sorts the employees array by ages in ascending order
employees.sort((a, b) => {
    return a.age - b.age;
});
//display the employess ,useing forEach()
employees.forEach((e) => {
    console.log(`${e.firstName} ${e.lastName} ${e.age}`);
});

employees.sort((a, b) => b.age - a.age);
//To sort the employees by ages in descending order, you just need to reverse the order in the comparison function. 
employees.forEach((e) => {
    console.log(`${e.firstName} ${e.lastName} ${e.age}`);
});

//Sort an array of objects by strings
employees.sort((a, b) => {
    let fa = a.firstName.toLowerCase(),
        fb = b.firstName.toLowerCase();

    if (fa < fb) {
        return -1;
    }
    if (fa > fb) {
        return 1;
    }
    return 0;
});
employees.forEach((e) => {
    console.log(`${e.firstName} ${e.lastName}`);
});
//Sort an array of objects by dates
employees.sort((a, b) => {
    let da = new Date(a.joinedDate),
        db = new Date(b.joinedDate);
    return da - db;
});
employees.forEach((e) => {
    console.log(`${e.firstName} ${e.lastName} ${e.joinedDate}`);
});


