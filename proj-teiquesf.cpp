#include<iostream>
#include<stdlib.h>
using namespace std;
class A
{
    public:
    int i,n=1,j,k;
    float per,sum1=0,sum2=0,total=210,subtotal=0;
    string name;
    int arr[40],temp[40],temp2[40];
    int check()
    {
        if(arr[i]>7 || arr[i]<1)
        {
            cout<<endl;
            cout<<name<<", You inputed Invalid value"<<endl;
            cout<<"Please retry and input the value form 1 to 7"<<endl;
            cout<<endl;
            exit(0);
        }
        return 0;
    }
    int getdata()
    {
    cout<<endl;
    cout<<"---------------------------------------------------WELCOME in TEIQue-SF Program---------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"------------------------------------(Trait Emotional Intelligence Questionnaire-Short Form)----------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Enter Your Name: ";
    fflush(stdin);
    getline(cin,name);
    cout<<endl;
    cout<<name<<" please read the Instructions of this Program:-"<<endl;
    cout<<endl;
    cout<<"-Please answer the all questions based on your feelings and behaviors."<<endl;
    cout<<"-Your all answers are based on the ranking of each questions."<<endl;
    cout<<"-There are seven possible responses to each statement ranging from 1 to 7"<<endl;
    cout<<"-The ranking values are,"<<endl;
    cout<<"1. Completely Disagree"<<endl;
    cout<<"2. Disagree"<<endl;
    cout<<"3. Little Bit Disagree"<<endl;
    cout<<"4. Neutral"<<endl;
    cout<<"5. Little BIt Agree"<<endl;
    cout<<"6. Agree"<<endl;
    cout<<"7. Completely Agree"<<endl;
    cout<<"-Work quickly and try to answer as accurately as possible."<<endl;
    cout<<endl;
    cout<<"So, Let's Start our Program..........";
    for(i=0;i<n;i++)
    {
        cout<<endl;
        cout<<endl;
        cout<<"1) Expressing my emotions with words is not a problem for me: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"2) I often find it difficult to see things from another person's viewpoint: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"3) On the Whole, I'm a highly motivated person: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"4) I usually find it difficult to regulate my emotions: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"5) I generally don't find life enjoyable: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"6) I can deal effectively with people: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"7) I tend to change my mind frequently: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"8) Many times, I can't figure out what emotion I'm feeling: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"9) I feel that I have a number of good qualities: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"10) I often find it difficult to stand up for my rights: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"11) I'm usually able to influence the way other people feel: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"12) On the whole, I have a gloomy perspective on most things: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"13) Those close to me often complain that I don't treat them right: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"14) I often find it difficult to adjust my life according to the circumstances: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"15) On the whole, I'm able to deal with stress: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"16) I often find it difficult to show my affection to those close to me: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"17) I'm normally able to “get into someone's shoes” and experience their emotions: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"18) I normally find it difficult to keep myself motivated: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"19) I'm usually able to find ways to control my emotions when I want to: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"20) On the whole, I'm pleased with my life: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"21) I would describe myself as a good negotiator: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"22) I tend to get involved in things I later wish I could get out of: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"23) I often pause and think about my feelings: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"24) I believe I'm full of personal strengths: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"25) I tend to “back down” even if I know I'm right: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"26) I don't seem to have any power at all over other people's feelings: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"27) I generally believe that things will work out fine in my life: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"28) I find it difficult to bond well even with those close to me: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"29) Generally, I'm able to adapt to new environments: ";
        fflush(stdin);
        cin>>arr[i];
        i++;
        cout<<"30) Others admire me for being relaxed: ";
        fflush(stdin);
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Here is Your All Inputed Values:- "<<endl;
    for(i=0;i<n;i++)
    {
     for(k=0;k<n;k++)
      {
        cout<<endl;
        cout<<"1) Expressing my emotions with words is not a problem for me: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"2) I often find it difficult to see things from another person's viewpoint: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"3) On the Whole, I'm a highly motivated person: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"4) I usually find it difficult to regulate my emotions: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"5) I generally don't find life enjoyable: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"6) I can deal effectively with people: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"7) I tend to change my mind frequently: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"8) Many times, I can't figure out what emotion I'm feeling: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"9) I feel that I have a number of good qualities: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"10) I often find it difficult to stand up for my rights: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"11) I'm usually able to influence the way other people feel: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"12) On the whole, I have a gloomy perspective on most things: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"13) Those close to me often complain that I don't treat them right: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"14) I often find it difficult to adjust my life according to the circumstances: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"15) On the whole, I'm able to deal with stress: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"16) I often find it difficult to show my affection to those close to me: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"17) I'm normally able to “get into someone's shoes” and experience their emotions: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"18) I normally find it difficult to keep myself motivated: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"19) I'm usually able to find ways to control my emotions when I want to: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"20) On the whole, I'm pleased with my life: "<<arr[i]<<endl;  
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"21) I would describe myself as a good negotiator: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"22) I tend to get involved in things I later wish I could get out of: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"23) I often pause and think about my feelings: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"24) I believe I'm full of personal strengths: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"25) I tend to “back down” even if I know I'm right: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"26) I don't seem to have any power at all over other people's feelings: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"27) I generally believe that things will work out fine in my life: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"28) I find it difficult to bond well even with those close to me: "<<arr[i]<<endl;
        check();
        i++;
        cout<<"29) Generally, I'm able to adapt to new environments: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
        k++;
        i++;
        cout<<"30) Others admire me for being relaxed: "<<arr[i]<<endl;
        check();
        temp2[k]=arr[i];
      }
    }
    return 0;
    }
    int reverse()
    {
        switch(arr[i])
        {
            case 1: arr[i]=7;
                    break;
            case 2: arr[i]=6;
                    break;
            case 3: arr[i]=5;
                    break;
            case 4: arr[i]=4;
                    break;
            case 5: arr[i]=3;
                    break;
            case 6: arr[i]=2;
                    break;
            case 7: arr[i]=1;
                    break;
        }
        return 0;
    }
    int reversevalue()
    {
    cout<<endl;
    cout<<"Reversing the Values of some Questions according TEIQue-SF program:-"<<endl;
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
       {
        cout<<endl;
        arr[i];
        i++;
        reverse();
        cout<<"2) I often find it difficult to see things from another person's viewpoint: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        reverse();
        cout<<"4) I usually find it difficult to regulate my emotions: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        reverse();
        cout<<"5) I generally don't find life enjoyable: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        reverse();
        cout<<"7) I tend to change my mind frequently: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        reverse();
        cout<<"8) Many times, I can't figure out what emotion I'm feeling: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        reverse();
        cout<<"10) I often find it difficult to stand up for my rights: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        reverse();
        cout<<"12) On the whole, I have a gloomy perspective on most things: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        reverse();
        cout<<"13) Those close to me often complain that I don't treat them right: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        reverse();
        cout<<"14) I often find it difficult to adjust my life according to the circumstances: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        reverse();
        cout<<"16) I often find it difficult to show my affection to those close to me: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        reverse();
        cout<<"18) I normally find it difficult to keep myself motivated: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        arr[i];
        i++;
        arr[i];
        i++;
        reverse();
        cout<<"22) I tend to get involved in things I later wish I could get out of: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        arr[i];
        i++;
        reverse();
        cout<<"25) I tend to “back down” even if I know I'm right: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        reverse();
        cout<<"26) I don't seem to have any power at all over other people's feelings: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        reverse();
        cout<<"28) I find it difficult to bond well even with those close to me: "<<arr[i]<<endl;
        temp[j]=arr[i];
        j++;
        i++;
        arr[i];
        i++;
        arr[i];
       }
    }
    cout<<endl;
    cout<<"Here is your all Reversed Values:- "<<endl;
    for(j=0;j<15;j++)
    {
      cout<<temp[j]<<endl;
      sum1=temp[j]+sum1;
    }
    cout<<endl;
    cout<<"Total Sum of all reversed Values: "<<sum1<<endl;
    cout<<endl;
    cout<<"Here is your all Non-Reversed Values:- "<<endl;
    for(k=0;k<15;k++)
    {
      cout<<temp2[k]<<endl;
      sum2=temp2[k]+sum2;
    }
    cout<<endl;
    cout<<"Total Sum of all Non-Reversed Values: "<<sum2<<endl;
    cout<<endl;
    subtotal=sum1+sum2;
    per=(subtotal/total)*100;
    cout<<"So, "<<name<<" your TEIQue-SF is "<<per<<" %"<<endl;
    if(per>60)
    cout<<"You have good EI(Emotional Intelligence)"<<endl;
    else if(per>80)
    cout<<"You have very nice EI(Emotional Intelligence)"<<endl;
    else if(per>90)
    cout<<"You have Excellent EI(Emotional Intelligence) ever......"<<endl;
    else if(per>50)
    cout<<"You have an Average EI(Emotional Intelligence)"<<endl;
    else
    cout<<"You have a poor EI(Emotional Intelligence), You must be work on it......"<<endl;
    cout<<endl;
    cout<<"Thanks for coming in TEIQue-SF Program "<<name<<endl;
    cout<<endl;
    return 0;
    }
};
int main()
{
    A obj;
    obj.getdata();
    cout<<endl;
    obj.reverse();
    cout<<endl;
    obj.reversevalue();
    return 0;
}