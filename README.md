vim-mq-patches
==============

> My private MQ Patches series for Vim

This is my private mq patch collection. Most of them have probably already been posted on the [vim-dev](http://groups.google.com/group/vim_dev) mailing list. If not, then that patch is probably experimental.

Among those patches, there is ~~the famous [breakindent patch](https://github.com/chrisbra/vim-mq-patches/blob/master/breakindent_patch) and~~ (now included upstream with [patch 7.4.338](https://groups.google.com/d/msg/vim_dev/qrhUA-dt7SY/9TtlIVu9r2oJ)) ~~the [variable tabstops](https://github.com/chrisbra/vim-mq-patches/blob/master/var_tabstops) patch (both should apply cleanly to current Vim source, if you apply both, you'll probably get some offset warnings)~~ (now included upstream with [patch 8.1.105](https://github.com/vim/vim/releases/tag/v8.1.0105)) and the ~~[tagfunc](https://github.com/chrisbra/vim-mq-patches/blob/master/tagfunc) patch~~ (now included upstream with [patch 8.1.1228)(https://github.com/vim/vim/releases/tag/v8.1.1228)).

### Note:

Not all patches will apply to upstream vim source (or even make sense nowadays).

### License & Copyright
Most of those patches are from myself. But some patches have been developed by other people and I just keep them here in a central repository and try to fix them, in case Vim changes.
I'll try to mention the correct copyright holders in the patch files. Especially this is true for those patches:
- [breakindent patch](https://github.com/chrisbra/vim-mq-patches/blob/master/breakindent_patch) © Václav Šmilauer 2007
- [variable tabstops](https://github.com/chrisbra/vim-mq-patches/blob/master/var_tabstops) © Matthew Winn 2008
- [tagfunc](https://github.com/chrisbra/vim-mq-patches/blob/master/tagfunc) © Lech Lorens 2010

In case no explicit license is mentioned, the following statement applies:
© 2009-2019 by Christian Brabandt. The Vim License applies. See `:h license`

__NO WARRANTY, EXPRESS OR IMPLIED.  USE AT-YOUR-OWN-RISK__
