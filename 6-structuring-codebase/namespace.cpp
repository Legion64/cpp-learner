#include <iostream>

/**
 * Namespaceler bir kod tabanının fonksiyonlarını birbirinden ayırmak için muhteşem araçlardır.
 * Sınıfların, fonksiyonların ve structların isimlerinin aynı olduğu durumlarda namespace ile yapılan
 * işin niteliği belirlenebilir
 */

namespace Cache
{
    int runInvalidate() {
        std::cout << "Cache Invalidated!" << std::endl;
        
        return 0;
    }
} // namespace TestNamespace


int main() {
    Cache::runInvalidate();
    
    return 0;
}