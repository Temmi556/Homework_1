#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    // Set the locale to support UTF-8
    setlocale(LC_ALL, "en_US.UTF-8");

    wprintf(L"     /\\\n");
    wprintf(L"    /  \\\n");
    wprintf(L"   /____\\\n");
    wprintf(L"  |  _   |\n");
    wprintf(L"  | |_|  |\n");
    wprintf(L"  |______|");
    return 0;
}