# hello_gtest
## 建立必要的工程目录结构如下
## 编辑 CMakeLists.txt.in 
指定将 googletest 作为宿主工程的一个 ExternalProject，同时指定 googletest 代码仓库地址和具体分支
## 编辑宿主工程 CMakeLists.txt
指定工程名称、源文件及头文件目录，最重要的需要关联 googtest 子工程的 CMakeLists.txt，同时指定在 cmake 过程中编译 gtest 库
## 编写 main.cc
加单元测试用例
## cmake 构建工程文件
成功后会在当前目录下生成工程文件，然后通过 vs2017 打开工程文件、执行构建解决方案即可生成 hello_gtest.exe 可执行文件, 运行即可看到单元测试执行效果。