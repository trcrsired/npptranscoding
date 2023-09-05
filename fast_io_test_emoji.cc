int main()
{
	::fast_io::timer t(u8"fast_io");
	::fast_io::basic_ocode_cvt_file<char8_t,char16_t> obf(u8"fast_io_emoji.txt");
	for(::std::size_t i{};i!=1000000;++i)
	{
		::fast_io::io::print(obf,u8"😘😗😙😚😋\n");
	}
}
