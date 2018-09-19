// Add this code above main and after your #includes
// To clear the screen just type ClearScreen();

void ClearScreen() {
#ifdef _WIN32
  std::system("cls");
#else
  // Assume POSIX
  std::system("clear");
#endif
}
