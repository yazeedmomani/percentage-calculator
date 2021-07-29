"use strict";

//calculator page
let maximum = 1920;

function calculate() {
  let numberInPexels = Number(document.querySelector("#number-in-pexel").value);
  let numberInPercentage = (numberInPexels * 100) / maximum;
  document.querySelector("#number-in-percentage").textContent =
    numberInPercentage.toFixed(5);
}

function reset() {
  document.querySelector("#number-in-pexel").value = "";
  document.querySelector("#number-in-percentage").textContent = "0";
}

function changeValue() {
  maximum = Number(document.querySelector("#maximum").value);
  document.querySelector("#maximum").value = "";
  document.querySelector(".overlay").style.display = "none";
  document.querySelector(".maximum-value").textContent = `100% = ${maximum}`;
}

function overlayOn() {
  document.querySelector(".overlay").style.display = "block";
}

function overlayOff() {
  document.querySelector(".overlay").style.display = "none";
}

if (
  document.querySelector("title").textContent ==
  "Calculator | Percentage Calculator V.2"
) {
  document.querySelector(".maximum-value").textContent = `100% = ${maximum}`;
  document.querySelector("#enter").addEventListener("click", calculate);
  document.querySelector("#reset").addEventListener("click", reset);
  document.querySelector("#change").addEventListener("click", changeValue);
  document.querySelector("#overlay-on").addEventListener("click", overlayOn);
  document.querySelector("#overlay-off").addEventListener("click", overlayOff);
}
