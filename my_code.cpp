#include <iostream>
#include <string>
#include <stack>
#include <queue>

int main() {
  stack<std::string> browser_history = {};

  std::string i = "";
  std::cout << "Welcome to my browser!" << std::endl;
  // std::cout << "Type a URL to go to a website. Or type BACK to return to a previous website or EXIT to exit." << std::endl;
  while (true) {
    std::cin >> i;
    if (i == "EXIT") {
      break;
      } else if (i == "BACK") {
        std::string url = browser_history.top();
        browser_history.pop();
        std::cout << "You are at " << url << std::endl;
      } else {
        browser_history.push(i);
        std::cout << "You are at " << i << std::endl;    
      }
  }
}
