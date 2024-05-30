import { Routes } from "@angular/router";
export const routes:Routes =[

    {path:'alta', loadComponent: ()=> import('./alta-producto/alta-producto.component'),},
    {path:'detalle', loadComponent: ()=> import('./page-producto/page-producto.component'),},

]


export default routes;
