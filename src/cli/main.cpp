// Includes
#include <iostream>
#include <fstream>
// pre-set vars
int warning;
//Functions 

int prefile_run(std::ifstream file){ // when a file is provided
    warning = 0;
    return warning;
}

int noarg_run(){ // when no arguments are provided
    warning = 0;
    return warning;
}

int arg_run(int argc, char **argv){ // when arguments are provided
    warning = 0;
    return warning;
}


// main
int main(int argc, char **argv){
    if (argc > 1){
        arg_run(argc,argv);
    }
    else {
        noarg_run();
    }
    return 0;
}