import Vue from 'vue'
import App from './App.vue'

//import '@/assets/Global.css'
import '@/assets/Global.js'

import upperFirst from 'lodash/upperFirst'
import camelCase from 'lodash/camelCase'

import VueI18n from 'vue-i18n'

//导入语言包{{
import zh_CN from './lang/zh_CN'
import en from './lang/en'
import ru from './lang/ru'
import hy from './lang/hy'
import es from './lang/es'
import pt from './lang/pt'
import th from './lang/th'
//}}

Vue.use(VueI18n)

const i18n = new VueI18n({
    locale: 'zh_CN', // 语言标识
    messages: {
        zh_CN,
        en,
		ru,
		hy,
		es,
		pt,
		th,
    },
})




const requireComponent = require.context(
    // 其组件目录的相对路径
    './components',
    // 是否查询其子目录
    false,
    // 匹配基础组件文件名的正则表达式
    /\w+\.(vue|js)$/
)

requireComponent.keys().forEach(fileName => {
    // 获取组件配置
    const componentConfig = requireComponent(fileName)

    // 获取组件的 PascalCase 命名
    const componentName = upperFirst(
        camelCase(
            // 剥去文件名开头的 `./` 和结尾的扩展名
            fileName.replace(/^\.\/(.*)\.\w+$/, '$1')
        )
    )

    // 全局注册组件
    Vue.component(
        componentName,
        // 如果这个组件选项是通过 `export default` 导出的，
        // 那么就会优先使用 `.default`，
        // 否则回退到使用模块的根。
        componentConfig.default || componentConfig
    )

    //window.console.log("auto register component => "+componentName)
})




Vue.config.productionTip = false


window.$Vue = new Vue({
    render: h => h(App),
    i18n,
}).$mount('#app')