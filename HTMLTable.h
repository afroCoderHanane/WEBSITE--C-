#pragma once
//class which allow to convert a 2D array into HTML
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
class HTMLTable
{
  private:
  vector< string> headers;
  vector < vector<string>>rows;
  //helper method to convert an HTML row in a table
  void writeRow(ostream & out, string tag, vector< string> row);
  public:
  //Prototypes
  //set headers for the table columns
   void setHeaders(const vector< string>& headers);
  // {
  //   this-> headers= headers;
  // }
  //add rows to the table
   void addRow(const vector < string > & row);
  // {
  //   rows.push_back(row);
  // }
  //write the table into HTML form onto an output stream
  friend ostream & operator << (ostream & out, HTMLTable htmlTable);
};

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