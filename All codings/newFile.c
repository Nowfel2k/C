// for third lift
    // current pos - lift pos - direction - distance
    if(currentFloor<third.position && strcmpi(third.direction,"down")==0){
        third.distance = third.position - currentFloor;
    }

    else if(currentFloor<third.position && strcmpi(third.direction, "down")!=0){
        third.distance = 0;
        third.distance += 2*(12-third.position); // now it is at the same position as before
        // but direction is DOWN
        third.distance += third.position-currentFloor;
    }

    else if(currentFloor>third.position && strcmpi(third.direction,"up")==0){
        third.distance = currentFloor - third.position;
    }

    else if(currentFloor>third.position && strcmpi(third.direction,"up")!=0){
        third.distance = 0;
        third.distance += 2*(third.position); // now it is at the same position as before
        // but direction is UP
        third.distance += currentFloor - third.position;
    }

    printf("%d", third.distance);
