# 学习使用 NDK

## 使用 Androidstudio 创建默认 NDK 项目

## 创建自己的源文件

### 在cpp文件夹中创建 c/c++ source 文件

### 在 CMakeLists.txt 文件中配置 创建的源文件

```
添加
add_library(
            hello
            SHARED
            src/main/cpp/hello.cpp
            )
target_link_libraries(
            hello
            ${log-lib}
)

好像是要引用一个c++文件就要添加一个add_library和target_link_libraries。反正add_library写到一起不能编译成功
如果配置成功在.cpp文件中写代码会有提示了
```

### 在 .cpp 文件中写输出字段

```
#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_fta_testndk_Hello_sayHello(JNIEnv *env,
                                    jobject) {
    std::string hello = "hello from my c++";
    return env->NewStringUTF(hello.c_str());
}

仿照默认生成的代码修改自己的输出文字。具体很多c++语法不太了解
```

### 创建对应的java文件指向.cpp文件

```
 static {
        System.loadLibrary("hello");
    }

    public static native String sayHello();
```

### 在要显示的地方引用

