#include <iostream>
#include <iomanip>
// Data Ops

int main()
// Output formatting
{
  // std::endl : places a newline character on the output stream. Same as placing '\n'
  /*   std::cout << "Hello";
    std::cout << "World!";

    std::cout << std::endl;
    std::cout << "------------" << std::endl;

    std::cout << "Hello" << std::endl;
    std::cout << "World!" << std::endl;

    std::cout << "------------" << std::endl;

    std::cout << "Hello\n";
    std::cout << "World!\n";

    std::cout << "------------" << std::endl;

    // std::flush : flushes the output buffer to its final destination
    std::cout << "This is a nice message...." << std::endl
              << std::flush; */

  // std::setw() : Adjusts the field width for the item to be printed
  // the setw() manipulator only affects the next value to be printed

  /* std::cout << "Unformatted table : " << std::endl;
  std::cout << "Daniel"
            << " "
            << "Gray"
            << " 25" << std::endl;
  std::cout << "Stanley"
            << " "
            << "Woods"
            << " 33" << std::endl;
  std::cout << "Jordan"
            << " "
            << "Parker"
            << " 45" << std::endl;
  std::cout << "Joe"
            << " "
            << "Ball"
            << " 21" << std::endl;
  std::cout << "Josh"
            << " "
            << "Carr"
            << " 27" << std::endl;
  std::cout << "Izaiah"
            << " "
            << "Robinson"
            << " 29" << std::endl;

  std::cout << "------------" << std::endl; */

  /*   std::cout << "Formatted table : " << std::endl;

    std::cout << std::setw(10) << "Firstname" << std::setw(10) << "Lastname" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Daniel" << std::setw(10) << "Gray" << std::setw(5) << "25" << std::endl;
    std::cout << std::setw(10) << "Stanley" << std::setw(10) << "Woods" << std::setw(5) << "33" << std::endl;
    std::cout << std::setw(10) << "Jordan" << std::setw(10) << "Parker" << std::setw(5) << "45" << std::endl;
    std::cout << std::setw(10) << "Joe" << std::setw(10) << "Ball" << std::setw(5) << "21" << std::endl;
    std::cout << std::setw(10) << "Josh" << std::setw(10) << "Carr" << std::setw(5) << "27" << std::endl;
    std::cout << std::setw(10) << "Izaiah" << std::setw(10) << "Robinson" << std::setw(5) << "29" << std::endl;

    std::cout
        << "------------" << std::endl;*/

  // setfill

  /*   std::cout << "Table with fill characters : " << std::endl;

    int col_width{20};
    std::cout << std::left;
    std::cout << std::setfill('-'); // fill char
    std::cout << std::setw(col_width) << "Lastname" << std::setw(col_width) << "Firstname" << std::setw(col_width) << "Age" << std::endl;
    std::cout << std::setw(col_width) << "Gray" << std::setw(col_width) << "Daniel" << std::setw(col_width) << "25" << std::endl;
    std::cout << std::setw(col_width) << "Woods" << std::setw(col_width) << "Stanley" << std::setw(col_width) << "33" << std::endl;
    std::cout << std::setw(col_width) << "Parker" << std::setw(col_width) << "Jordan" << std::setw(col_width) << "45" << std::endl;
    std::cout << std::setw(col_width) << "Ball" << std::setw(col_width) << "Joe" << std::setw(col_width) << "21" << std::endl;
    std::cout << std::setw(col_width) << "Carr" << std::setw(col_width) << "Josh" << std::setw(col_width) << "27" << std::endl;
    std::cout << std::setw(col_width) << "Robinson" << std::setw(col_width) << "Izaiah" << std::setw(col_width) << "29" << std::endl;

    std::cout
        << "------------" << std::endl; */

  /*   // Internal justified : sign is left justified, data is right justified
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl; */

  // positive

  /*   int pos_num{34};
    int neg_num{-45};

    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;
    std::cout << std::showpos;
    std::cout << "pos_num : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl;
    std::cout << std::endl;
    std::cout << std::noshowpos;
    std::cout << "pos_num  : " << pos_num << std::endl;
    std::cout << "neg_num : " << neg_num << std::endl; */

  // different number systems : std::dec, std::hex, std::oct

  /* int pos_int{717171};
  int neg_int{-47247};
  double double_var{498.32};

  std::cout << "default base format : " << std::endl;
  std::cout << "pos_int : " << pos_int << std::endl;
  std::cout << "neg-int : " << neg_int << std::endl;
  std::cout << "double_var : " << double_var << std::endl;
  std::cout << "------------" << std::endl;

  std::cout << "pos_int in differnet bases : " << std::endl;
  std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
  std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
  std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
  std::cout << "------------" << std::endl;

  std::cout << "neg_int in differnet bases : " << std::endl;
  std::cout << "neg_int (dec) : " << std::dec << neg_int << std::endl;
  std::cout << "neg_int (hex) : " << std::hex << neg_int << std::endl;
  std::cout << "neg_int (oct) : " << std::oct << neg_int << std::endl;
  std::cout << "------------" << std::endl;

  std::cout << "double_var in differnet bases : " << std::endl;
  std::cout << "double_var (dec) : " << std::dec << double_var << std::endl;
  std::cout << "double_var (hex) : " << std::hex << double_var << std::endl;
  std::cout << "double_var(oct) : " << std::oct << double_var << std::endl;
  std::cout << "------------" << std::endl; */

  // uppercase and nouppercase

  /*   int pos_int{717171};
    std::cout << "pos_int (nouppercase : deafult) : " << std::endl;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    std::cout << "------------" << std::endl;

    std::cout << "pos_int (uppercase) : " << std::endl;
    std::cout << std::uppercase;
    std::cout << "pos_int (dec) : " << std::dec << pos_int << std::endl;
    std::cout << "pos_int (hex) : " << std::hex << pos_int << std::endl;
    std::cout << "pos_int (oct) : " << std::oct << pos_int << std::endl;
    std::cout << "------------" << std::endl; */

  // fixed & scientific : for floating point values

  double a{3.1415926535897932384626433832795};
  double b{2006.0};
  double c{1.34e-10};

  std::cout << "double values (default : use scientific where necessary) : " << std::endl;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;

  std::cout << "------------" << std::endl;

  std::cout << "double values (fixed) : " << std::endl;
  std::cout << std::fixed;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;
  std::cout << "------------" << std::endl;

  std::cout << "double values (scientific) : " << std::endl;
  std::cout << std::scientific;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;
  std::cout << "------------" << std::endl;

  std::cout << "double values (back to defaults) : " << std::endl;
  std::cout.unsetf(std::ios::scientific | std::ios::fixed); // hack
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;
  std::cout << "c : " << c << std::endl;
  std::cout << "------------" << std::endl;
}
