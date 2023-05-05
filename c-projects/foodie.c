#include <iostream>
//simple code to see how people would respond to user input
int main() {
    int a;
    puts("HOW MANY TIMES DO YOU EAT IN A DAY? ");
    scanf("%i",&a);
    switch(a){
        case 1:
        case 2:
            puts("you're a picky eater");
            break;
        case 3:
        case 4:
            puts("you're a moderate eater");
            break;
        case 5:
            case 6:
            case 7:
            case 8:
                puts("you too like food");
                break;
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
                puts("you need to change your ways comrade");
                break;
        default:
            puts("it's either invalid or you're wyning yourself lol");
            break;
    }
    return 0;
}

