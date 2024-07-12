# keqing_grub_themes
## 刻晴的GRUB主题包
### 仅限Linux系统!!!\
更改GRUB主题的方法：
```
1、解压压缩包
2、打开终端,并切换到主题包文件夹所在的路径
3、使用sudo cp -r Keqing_cn/ /boot/grub/themes将主题包拷贝至GRUB主题文件夹(sudo、-r千万不要掉)
4、输入sudo vim /etc/default/grub（sudo不要掉）
5、定位到#GRUB_THEMES=""
6、将前面的“#”去掉，双引号内加上/boot/grub/themes/Keqing_cn/theme.txt
7、按下Esc后输入:wq保存并退出
8、执行sudo update-grub或sudo grub2-mkconfig -o /boot/grub2/grub.cfg instead
9、重启
```
Enjoy it!
