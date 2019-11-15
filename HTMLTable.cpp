#include"HTMLTable.h"
// Writes a row of the table, using the given tag for the table *
// data. The tag may be td for table data or th for table header.
 void HTMLTable:: writeRow(ostream & out, string tag, vector< string> row)
 {
   out<< "<tr>\n";
   for (unsigned int k =0; k< headers.size();k ++)
   {
    out <<"<"<< tag <<">"
    <<row[k]<< "</"<< tag << ">";
   }
     out << "\n/tr>\n";
 }
 //overloading stream operator <<
 ostream & operator << (ostream &out, HTMLTable htmlTable)
 {
   out << "table border = \"1\">\n";
   //write the headers
   htmlTable.writeRow(out, "th",htmlTable.headers);
   // write the rows
   for (unsigned int r =0; r< htmlTable.rows.size();r++)
   { 
     htmlTable.writeRow(out, "td",htmlTable.rows[r]);
   }
   out << "</table>\n";
   return out;
 }
  void HTMLTable::setHeaders(const vector< string>& headers)
  {
    this-> headers= headers;
  }
  void HTMLTable:: addRow(const vector < string > & row)
  {
    rows.push_back(row);
  }