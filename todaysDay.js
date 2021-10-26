function getTodaysDay() {
    let date = new Date();
    let day = date.getDay();
    let nameOfDay;
  
    switch(day){
        case 0: 
            nameOfDay = 'Sunday';
            break;
        case 1:
            nameOfDay = 'Monday';
            break;
        case 2:
            nameOfDay = 'Tuesday';
            break;
        case 3:
            nameOfDay = 'Wednesday';
            break;
        case 4:
            nameOfDay = 'Thursday';
            break;
        case 5:
            nameOfDay = 'Friday';
            break;
        case 6:
            nameOfDay = 'Saturday';
            break;
  
    }
    return nameOfDay;
  }