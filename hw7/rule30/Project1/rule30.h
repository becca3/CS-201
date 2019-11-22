//# define TIME_SIZE 40
//
//static char time_buffer[TIME_SIZE];
//const struct std::tm* tm_ptr;
//size_t len;
//std::time_t now;
//
//now = std::time(NULL);
//tm_ptr = std::localtime(&now);
//
//len = std::strftime(time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm_ptr);
//
//std::cout << time_buffer << "\n";
//
//return;
//# undef TIME_SIZE
//}