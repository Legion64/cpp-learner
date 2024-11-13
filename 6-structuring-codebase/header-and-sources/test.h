/**
 * Header dosyaları sadece fonksiyon ve sınıf tanımlamalarını içerir. Bütün kodları içermez. Böylece fonksiyonun
 * parametresinin neler olduğunu, ne çıktı verdiğini ve nasıl kullanılabileceğini bize gösterir.
 */

#pragma once

namespace TestSpace
{
    class TestClass
    {
    public:
        TestClass();
        ~TestClass();

    private:
        void runSomething();
    };
} // namespace TestSpace
