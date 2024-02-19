#include <windows.h>
#include <time.h>
void keyboard(char password[]) {
  // Получите дескриптор окна
   sleep(5);
  HWND hwnd = GetForegroundWindow();
  // Создайте сообщение WM_CHAR для каждого символа
  for (int i = 0; i < strlen(password); i++) {
    PostMessage(hwnd, WM_CHAR, password[i], 0);
  }

}
int main() {
  // Задайте слово, которое хотите напечатать
//   char word[20];
//   for (int i=1;i<3;i++){
//   gets(word);
// keyboard(word);}
return 0;
}