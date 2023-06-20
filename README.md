# OCLint-FixedXcode14
来自https://github.com/Lianghuajian/oclint/tree/support_xcode14 编译好的版本 

https://github.com/oclint/oclint/issues/644 

https://zhuanlan.zhihu.com/p/620219215

解压之后,把放到一个固定的位置,取路径设置环境变量,`~/.zshrc`或者`~/.bash_profile`都可以
注意需要把 `bin` 目录下的脚本加上可执行权限 压缩的时候好像自动去掉了可执行权限 `chmod u+x *`
配置完执行一下`oclint --version` 有信息出来就哦了
```bash
/Users/wangguibin/MyShell/oclint-22.02

# .zshrc里配置 OCLint 为环境变量
OCLINT=/Users/wangguibin/MyShell/oclint-22.02
export PATH=$OCLINT/bin:$PATH
```
编辑完 `source ~/.zshrc` 刷新一下
