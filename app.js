export class ExampleComponent extends HTMLElement {
    constructor() {
        super();
        this.attachShadow({mode:'open'});
        this.shadowRoot.innerHTML = `
        <style>
        :host {display: block; height: 100%; width: 100%; display: grid; place-items: center;}
        </style>
        <main>Hello world of web components!</main>
        `;
    }
}

export function DefineCustomComponents() {
    window.customElements.define('example-component', ExampleComponent);
}