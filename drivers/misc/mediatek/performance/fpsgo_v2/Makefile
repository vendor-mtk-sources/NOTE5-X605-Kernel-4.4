#
# Copyright (C) 2017 MediaTek Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 2 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program. If not, see <http://www.gnu.org/licenses/>.
#
MTK_TOP = $(srctree)/drivers/misc/mediatek/
FPSGO_TOP = $(srctree)/drivers/misc/mediatek/performance/fpsgo_v2/
BASE_TOP = $(FPSGO_TOP)/base
FBT_TOP = $(FPSGO_TOP)/fbt
FSTB_TOP = $(FPSGO_TOP)/fstb
COM_TOP = $(FPSGO_TOP)/composer

obj-y += fpsgo_main.o
obj-y += base/
obj-y += composer/

obj-$(CONFIG_MTK_FPSGO_FBT_GAME) += fbt/
obj-$(CONFIG_MTK_FPSGO_FSTB) += fstb/

ccflags-y += \
        -I$(srctree)/include/ \
        -I$(MTK_TOP)/include/ \
	-I$(MTK_TOP)/dfrc/ \
	-I$(BASE_TOP)/include/ \
        -I$(FBT_TOP)/include/ \
        -I$(FSTB_TOP)/ \
        -I$(COM_TOP)/include/ \
