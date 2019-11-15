#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include"HTMLTable.h"
using namespace std;
/*
This class convert a array of string into a vector string.
the Array of string must be terminated by a sentinel of value 0
*/
class StringVector: public vector< string>
{
  public:
  StringVector(string s[])
  {
    int k = 0;
    while (s [k].length()!=0)
    {
      this->push_back(s[k]);
      k++;
    }
  }
} ;

// class HTMLTable
// {
//   private:
//   vector< string> headers;
//   vector < vector<string>>rows;
//   void writeRow(ostream & out, string tag, vector< string> row);
//   public:
//   void setHeaders(const vector< string>& headers)
//   {
//     this-> headers= headers;
//   }
//   void addRow(const vector < string > & row)
//   {
//     rows.push_back(row);
//   }
//   friend ostream & operator << (ostream & out, HTMLTable htmlTable);
// };

//  void HTMLTable:: writeRow(ostream & out, string tag, vector< string> row)
//  {
//    out<< "<tr>\n";
//    for (unsigned int k =0; k< headers.size();k ++)
//    {
//     out <<"<"<< tag <<">"
//     <<row[k]<< "</"<< tag << ">";
//    }
//      out << "\n/tr>\n";
//  }
//  ostream & operator << (ostream &out, HTMLTable htmlTable)
//  {
//    out << "table border = \"1\">\n";
//    htmlTable.writeRow(out, "th",htmlTable.headers);
//    for (unsigned int r =0; r< htmlTable.rows.size();r++)
//    {
//      htmlTable.writeRow(out, "td",htmlTable.rows[r]);
//    }
//    out << "</table>\n";
//    return out;
//  }
 int main ()
 {
   string headers[]={"Name","Address", "Phone", ""};
   string person1 []=
   {
     "Mike Sane","1215 Mills St","6307281293",""
   };
   string person2 []=
   {
     "Natasha Upenski", "513 Briarcliff Ln", "412-672-1004"
   };
   HTMLTable hTable;
   hTable.setHeaders(StringVector(headers));
   hTable.addRow(StringVector(person1));
   hTable.addRow(StringVector(person2));
   ofstream outFile("c:\\temp\\table.html");
   outFile<<hTable;
   outFile.close();
   cout << hTable;
   system("c:\\temp\\table.html");
   return 0;


 }
