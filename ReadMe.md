差异化图示
---
> 注：`以下表述仅依照我个人的认识`
* **差异化的愿景**
> `蓝色`字表示“特点”<br>
> `绿色`字表示“愿景”

![](https://github.com/SuWeipeng/img/raw/master/12_RT-Thread/RTT-1.png)
* **不同的愿景导致差异化的思想**
![](https://github.com/SuWeipeng/img/raw/master/12_RT-Thread/RTT-2.png)

特别友好的RTT
---
> RT-Thread（以下简称 RTT）的设计理念十分友好，充分展现了国人友善亲和的一面。
* **内核裁剪十分方便**<br>
RTT 模块化设计，内核与组件既可以方便的分离也能自由的无缝组合。
* **庞大的生态**<br>
我作为个人开发者，长期在沉浸在自己的领域里。从我接触到 RTT 开始，觉得其庞大的生态系统能让我顺畅地接入不同领域，于不同领域间自由切换简直如丝般顺滑。

我为什么要精简这个RTT内核
---
* **STM32 共同繁荣的开发方式**<br>
STM32 **CubeMX** 图形化配置超级方便，并且 CubeMX 提供 VCP、FatFS 等常用功能。<br>
**RTT** 也有 VCP、文件系统等组件，用起来也十分方便。
> 以 VCP(虚拟串口) 功能为例，比如有人已经很习惯于 CubeMX 的 VCP 了，用得很好很熟悉，那么此人多半不会因为 VCP 而转向 RTT。<br>
> `假设项目必须使用 RTOS 进行任务调度并选了 RTT，如果能兼容 CubeMX 的 VCP 那不是美美嗒了嘛。事实就是这么美，我国友好的 RTT 内核完全支持这么干。`
* **方便地对接已有代码**
> 比如：用 CubeMX 编程，代码已交付。新需求要用 RTT 做任务调度。

其实这是个代码架构问题。有很多优秀的代码架构诞生于 RTT 产生之前。<br>
清晰的架构接入 RTT 非常容易，容易到`只要分清线程功能，把内核文件加入编译就OK了`。**这就是我精简出这个内核的目的之一。**
* **大势所趋**
> 下图依野火《RT-Thread 内核实现与应用开发实战—基于STM32》书中所述而设计。

![](https://github.com/SuWeipeng/img/raw/master/12_RT-Thread/RTT-3.jpg)

既然 RTOS 是嵌入式编程方法的发展潮流，我又知道我国有自主的、好用的、开源的、友好的、可靠的 RTOS 正在蓬勃发展，**我必须挺一把！**

如何使用这个精简内核
---
> 建议用 git submodule 的方式引用此精简内核代码。

使用方法点此Demo连接：[lcd1602_rttthread_demo](https://github.com/SuWeipeng/lcd1602_rttthread_demo)<br>
不用git的朋友可以[百度网盘](https://pan.baidu.com/s/1jsNnhnDIDpMf5jHHLib5Cw)
下载，提取码：2k2u。 

Demo 中 `Libraries/rt-thread` 就是以 submodule 形式引用了这个精简内核。


关注作者
---
欢迎扫码关注我的公众号`MultiMCU EDU`。<br>
![](https://github.com/SuWeipeng/img/raw/master/gongzonghao.jpg)<br>
### `提示：在公众号“关于我”页面可加作者微信好友。`

 
