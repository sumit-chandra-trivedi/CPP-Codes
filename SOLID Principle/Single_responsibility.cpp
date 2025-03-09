#include <iostream>
#include <fstream>

// S: Single Responsibility Principle (SRP)

// A class should have only one reason to change.
// Example: Separate database management from business logic in a class.
/*
class Report {

    std::string content;
    public:

    void set_content(const std::string& str);
    void display();
    void save_report(const std::string& file_name);

};

void Report::set_content(const std::string& str){
    content = str;
}

void Report::display()
{
    std::cout<<"The report says : "<<content<<std::endl;
}

void Report::save_report(const std::string& file_name)
{
    std::ofstream outFile(file_name);

    if(outFile.is_open())
    {
        outFile<<content<<std::endl;
        outFile.close();
        std::cout<<"Report Saved"<<std::endl;
    } else {
        std::cerr<<"Unable to open file\n";
    }
}

int main()
{
    Report report;
    std::string str = "You are completely healthy.";
    report.set_content(str);
    report.display();
    report.save_report("report.txt");
}*/

class Report {
    std::string content;

public:
    void set_content(const std::string& str)
    {
        content = str;
    }

    std::string get_content() const
    {
        return content;
    }
};

class PrintReport{
public:
    void print_report(const Report& report)
    {
        std::cout<<report.get_content()<<std::endl;
    }
};

class SaveReport{
public:

    void save_report(const std::string& file_name,const Report&  report)
    {
   
        std::ofstream outFile(file_name);

        if(outFile.is_open())
        {
            outFile<<"The Report says : "<<report.get_content();
            outFile.close();
            std::cout<<"The report is saved\n";
        } else {
            std::cerr<<"Unable to open the file\n";
        }
    }
    

};

int main()
{
    Report report;
    std::string str = "You are totally fit.";
    report.set_content(str);
    PrintReport pr;
    pr.print_report(report);
    SaveReport sr;
    sr.save_report("report1.txt",report);
}




