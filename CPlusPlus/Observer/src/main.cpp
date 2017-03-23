/*************************************************************************
    > File Name: main.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2017年03月22日 星期三 22时21分40秒
 ************************************************************************/

#include<iostream>
#include<memory>
#include"BlogCSDN.h"
#include"ObserverBlog.h"

using namespace std;

int main()
{
	shared_ptr<Blog> blogPtr=make_shared<BlogCSDN>("YHSBLOG");
	shared_ptr<Observer> observerPtr1=make_shared<ObserverBlog>("observer1", blogPtr);
	shared_ptr<Observer> observerPtr2=make_shared<ObserverBlog>("observer2", blogPtr);
	blogPtr->Attach(observerPtr1);
	blogPtr->Attach(observerPtr2);
	blogPtr->SetStatus("RandomForest Introduction");
	blogPtr->Notify();
	blogPtr->SetStatus("DeepLearning Introduction");
	blogPtr->Notify();
	return 0;
}
