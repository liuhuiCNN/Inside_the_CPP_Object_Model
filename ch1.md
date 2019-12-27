
#### 第一章：
* （1）指向1000地址的 void* 指针，将涵盖怎样的地址空间？我们并不知道，所以一个void* 指针只能够持有一个地址，而不能通过它操作所指的object。
* （2）OO vs OB
Object-oriented支持Polymorphism,而Object-based不支持Polymorphism.主要的区别就在于此。支持多态的代价是额外的间接性--不论是在“内存的获得”或是在“类型的决断”上。
C++通过class的pointers和references来支持多态，这种程序设计风格就叫面向对象。
C++也支持具体的ADT程序风格，被称为基于对象，它只支持封装，不支持类型的扩充。
一个Object-based设计可能比一个对等的Object-oriented设计速度更快而且空间更紧凑。速度快是因为所有的函数引发操作都在编译时期解析完成，不需要设置virtual机制；空间紧凑则是因为每一个class object不需要负担传统上为了支持virtual机制而需要的额外负担。不过，Object-based设计比较没有弹性。