#include<simplecpp>
main_program{
    turtleSim();
    cout<<"How many sides?";
    int nsides;
    cin>>nsides;
    repeat(nsides){
        forward(5); wait(0.5); //pixels how long the line will be
        right(360.0/nsides); wait(0.5);
    }
    wait(5);
}
