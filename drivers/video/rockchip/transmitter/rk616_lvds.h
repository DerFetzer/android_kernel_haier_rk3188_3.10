#ifndef __RK616_VIF_H__
#define __RK616_VIF_H__
#include<linux/mfd/rk616.h>
#ifdef CONFIG_HAS_EARLYSUSPEND
#include<linux/earlysuspend.h>
#endif 
#include<linux/rk_screen.h>


struct rk616_lvds {
	struct mfd_rk616 *rk616;
	rk_screen *screen;
#ifdef CONFIG_HAS_EARLYSUSPEND
	struct early_suspend early_suspend;
#endif 
};

#endif
