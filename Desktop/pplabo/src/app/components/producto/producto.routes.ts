import { Routes } from "@angular/router";
export const routes:Routes =[

    {path:'alta', loadComponent: ()=> import('./alta-producto/alta-producto.component'),},

]


export default routes;
