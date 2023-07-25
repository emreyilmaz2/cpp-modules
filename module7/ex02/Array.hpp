#ifndef ARRAY_HPP
#define ARRAY_HPP

// template oldugu icin header da tanimlanmasi gerekiyor  
// hatta pdf de header da fonksyion implement(tanimlamak) 
// yasak diyor sayet templateler haric

#include <iostream>

template<typename T>
class Array{
private:
    T* elements;
    size_t length;
public:
    Array() : length(0){
    //  Creates an empty array
        elements = new T;
    }
    Array( unsigned int n ) : length(n){
    // Creates an array of n elements initialized by default
        elements = new T[length];
    }
    Array(const Array& arrayCopy) : length(arrayCopy.length){
        elements = new T[length];
        for(size_t i = 0; i < arrayCopy.length; i++)
            elements[i] = arrayCopy.elements[i];
    }
    Array& operator=(const Array& arrayCopy){
        if (this == &arrayCopy) {
            return *this;
        }
        delete[] elements;
        length = arrayCopy.length;
        elements = new T[length];
        for (size_t i = 0; i < length; i++) {
            elements[i] = arrayCopy.elements[i];
        }
        return *this;
    }
    ~Array(){
        delete[] elements;
    }

    T& operator[](size_t index){
        if(index >= length)
            throw Array::outOfBounds();
        return elements[index];
    }
    const T& operator[](size_t index) const{
        if(index >= length)
            throw Array::outOfBounds();
        return elements[index];
    }

    unsigned int size() const {
        return (length);  
    }

    class outOfBounds : public std::exception{
    public:
        const char *what() const throw(){
            return("\n <<< index is out of bounds >>> \n");
        }
    };
};

#endif


/*
1) Construction with no parameter: Creates an empty array.
Bu gereklilik, Array sınıfının bir nesnesi oluşturulurken hiçbir parametrenin geçilmemesi durumunda, 
boş bir dizi oluşturulmasını belirtir. Yani, Array nesnesi oluşturulduğunda içinde hiç eleman olmayan bir dizi başlangıçta oluşturulur.

2) Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.
Bu gereklilik, Array sınıfının bir nesnesi oluşturulurken bir unsigned int türündeki n parametresinin geçilmesi durumunda, 
n adet elemanı olan bir dizi oluşturulmasını belirtir. Bu durumda, dizinin elemanları varsayılan değerle (default value) başlatılacaktır.

 Bu gereklilik, Array sınıfının nesnelerinin kopyalanması veya atama işlemi yapılması durumunda, orijinal dizinin veya kopyanın birbirini etkilememesi 
gerektiğini belirtir. Yani, kopyalama veya atama işlemi gerçekleştirildikten sonra orijinal dizi veya kopya üzerinde yapılan değişiklikler, diğerini etkilememelidir.

4) You MUST use the operator new[] to allocate memory. Preventive allocation (allocating memory in advance) is forbidden. Your program must never access nonallocated memory.
Bu gereklilik, dizinin bellekteki hafızasının new[] operatörü kullanılarak dinamik olarak oluşturulması gerektiğini belirtir. 
Önceden bellek ayırma (preventive allocation) yapmak yasaklanmıştır, yani diziye başlangıçta yer ayırmak ve 
sonra bu bellek boyutunu arttırmak ya da azaltmak gibi bir yaklaşım kullanılmamalıdır. Ayrıca, programın tanımsız davranışa yol açacak şekilde 
tanımlanmamış bellek bölgesine erişmemesi gerektiği ifade edilir.

5) Elements can be accessed through the subscript operator: [ ].
Bu gereklilik, Array sınıfının elemanlarına erişmenin, normal dizilerde olduğu gibi [] operatörüyle gerçekleştirilebileceğini ifade eder.

6) When accessing an element with the [ ] operator, if its index is out of bounds, an std::exception is thrown.
Bu gereklilik, dizinin indeksine erişirken, eğer indeks dizinin boyutunun dışında bir değerse (0 ile size-1 aralığı dışında), 
std::exception türünden bir istisna (exception) fırlatılmasını belirtir. Bu, dizinin sınırlarının aşılmaması için güvenlik sağlar.

7) A member function size() that returns the number of elements in the array. This member function takes no parameter and mustn’t modify the current instance.
Bu gereklilik, Array sınıfının size() adında bir üye fonksiyonunun olmasını belirtir.
 Bu fonksiyon, dizinin eleman sayısını döndürmelidir ve hiçbir parametre almayarak, mevcut sınıfın durumunu değiştirmemelidir. 
 Yani, bu fonksiyon sadece okunabilir (const) bir durum döndürmelidir.
*/