#include <stdio.h>

// تعريف الهيكل الداخلي
struct abdo {
    int abdrzak;
    char errifaouy;
};

// تعريف الهيكل الخارجي واستخدام بوينتر للهيكل الداخلي
struct aze {
    int abs;
    struct abdo *innerPtr;
};

int main() {
    // إنشاء متغير من الهيكل الداخلي
    struct abdo innerObj;
    innerObj.abdrzak = 20;
    innerObj.errifaouy = 'A';
    
    // إنشاء متغير من الهيكل الخارجي وربطه بالهيكل الداخلي باستخدام البوينتر
    struct aze outerObj;
    outerObj.abs = 10;
    outerObj.innerPtr = &innerObj;
    
    // طباعة قيم الحقول باستخدام البوينتر
    printf("Outer Field: %d\n", outerObj.abs);
    printf("Inner Field: %d\n", outerObj.innerPtr->abdrzak);
    printf("Inner Char: %c\n", outerObj.innerPtr->errifaouy);
    
    return 0;
}