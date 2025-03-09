#include <iostream>
#include <map>
#include <string>
#include <vector>


int main()
{
    /*
    std::vector <std::string> v = {"apple","mango","apple","mango","banana","banana","apple","orange"};
    std::map <std::string,int> mymap;

    for(auto word : v)
    {
        std::cout<<mymap[word]<<" ";
        mymap[word]++;
    }
    std::cout<<"\n"; 
    for(const auto& map : mymap)
    {
        std::cout<<map.first<<" "<<map.second<<std::endl;
    }*/
    
    

   /*
   map <std::string, char> studentgrade;

    studentgrade["Ram"] = 'A';
    studentgrade["Shyam"] = 'B';
    studentgrade["Ghanshyam"] = 'C';

    for(auto s : studentgrade)
    {
        cout<<s.first<<" "<<s.second<<endl;  //Here Ghanshyam is printed first becuase In C++, the order of elements in a std::map is determined by the order of its keys, which are sorted in ascending order by default
    }

    std::string name ;
    cin>>name;
    if(studentgrade.find(name) != studentgrade.end())
    {
        cout<<"The grade of "<<name<<" is : "<<studentgrade[name]<<std::endl;

    }
    else{
        cout<<"The student with this name was not found in records. "<<endl;
    }
    */

   
   std::map <std::string, std::vector<std::string>> studentCourses;

   studentCourses["sumit"].push_back("Math");
   studentCourses["Divya"].push_back("Math");
   studentCourses["sumit"].push_back("Physics");
   studentCourses["Rahul"].push_back("Math");
   studentCourses["Rahul"].push_back("Chemistry"); 
   studentCourses["Rahul"].push_back("Bio");

   std::vector<std::string> subjects = {"civil", "mech","CSE"};
   studentCourses.insert({"Ram",subjects});

   for(const auto& student : studentCourses)
   {
        std::cout<<"The course for "<<student.first<<" is : ";
        
        for(const auto& course : student.second)
        {
            std::cout<<course<<" " ; 
        }
        std::cout<<std::endl;          
   }

/*
  std::map<int, std::string> myMap;

  myMap.insert({1,"apple"});
  myMap.insert(std::make_pair(2,"orange"));
  myMap[3] = "Banana";

  for(const auto& fruits : myMap)
  {
        std::cout<<"There are "<<fruits.first<<" " <<fruits.second<<std::endl;
  }

  int key = 5;

  std::map<int, std::string>::iterator it = myMap.find(key);

  if(it != myMap.end())
  {
    std::cout<<"Fruit for the given key is : "<<it->second;
  }else{
    std::cout<<"Key is not present"<<std::endl;
  }*/



}