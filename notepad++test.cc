int main()
{
	fast_io::timer t(u8"notepad++");
	Utf8_16_Write utw;
	utw.setEncoding(uni16LE);
	utw.openFile((TEXT("npp.txt")));
	for(::std::size_t i{};i!=1000000;++i)
	{
		utw.writeFile(u8"Hello World\n",12);
	}
}
