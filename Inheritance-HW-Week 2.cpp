#include<iostream>
using namespace std;
class Student{
    char name[100];
    int r;
    public:
    void get();
    void disp();
};
class Marks : public Student{
    int m[5];
    public:
    void mget();
    void mdisp();
};
class Sports{
    int s;
    public:
    void sget();
    void sdisp();
};
class Result : public Marks, public Sports{

};
void Student :: get(){
    cout<<"Enter Name and Roll No. : "<<endl;
    cin>>name>>r;
}
void Student :: disp(){
    cout<<"Name : "<<name<<"\t"<<"Roll No. : "<<r<<endl;
}
void Marks :: mget(){
    for(int i=0;i<5;i++){
        cout<<"Enter Marks of Subject "<<i+1<<" : "<<endl;
        cin>>m[i];
    }
}
void Marks :: mdisp(){
    for(int i=0;i<5;i++){
        cout<<"Marks of Subject "<<i+1<<" is : "<<m[i]<<endl;
    }
}
void Sports :: sget(){
    cout<<"Enter Marks in Sports : "<<endl;
    cin>>s;
}
void Sports :: sdisp(){
    cout<<"Marks in Sports is : "<<s<<endl;
}
int main(){
    Result R;
    int a;
    cout<<"Does the Student play Sports? (1/0) : "<<endl;
    cin>>a;
    R.get();
    R.mget();
    if(a==1){
        R.sget();
    }
    R.disp();
    R.mdisp();
    if(a==1){
        R.sdisp();
    }

    return 0;
}
