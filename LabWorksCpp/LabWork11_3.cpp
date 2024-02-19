#include <iostream>
#include <iterator>
#include <algorithm>
#include <fstream>
void ReadFile()
{
  std::ifstream Read_File;
	Read_File.open("/home/durininkirous/testfile");
	std::istreambuf_iterator<char> Begin(Read_File);
	std::istreambuf_iterator<char> Eof;
	std::for_each( Begin, Eof, [](char word){ std::cout << word;});
  Read_File.close();
}

void WriteFile()
{
  std::ifstream Read_File;
	std::ofstream Write_File;
	Read_File.open("/home/durininkirous/testfile");
  std::istreambuf_iterator<char> Begin(Read_File);
	std::istreambuf_iterator<char> Eof;
	Write_File.open("/home/durininkirous/Desktop/LabWorks/LabWork11/file");
	std::ostreambuf_iterator<char> WriteFileStart(Write_File);
	std::copy(Begin, Eof, WriteFileStart);
  Write_File << "Test is successful!\n";
  Read_File.close();
  Write_File.close();
}

int main ()
{
  ReadFile();
  WriteFile();
}
