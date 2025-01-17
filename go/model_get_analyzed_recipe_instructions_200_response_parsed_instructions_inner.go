/*
spoonacular API

The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.

API version: 1.1
Contact: mail@spoonacular.com
*/

// Code generated by OpenAPI Generator (https://openapi-generator.tech); DO NOT EDIT.

package openapi

import (
	"encoding/json"
)

// GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner struct for GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner
type GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner struct {
	Name string `json:"name"`
	Steps []GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInnerStepsInner `json:"steps,omitempty"`
}

// NewGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner instantiates a new GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner object
// This constructor will assign default values to properties that have it defined,
// and makes sure properties required by API are set, but the set of arguments
// will change when the set of required properties is changed
func NewGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner(name string) *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner {
	this := GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner{}
	this.Name = name
	return &this
}

// NewGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInnerWithDefaults instantiates a new GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner object
// This constructor will only assign default values to properties that have it defined,
// but it doesn't guarantee that properties required by API are set
func NewGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInnerWithDefaults() *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner {
	this := GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner{}
	return &this
}

// GetName returns the Name field value
func (o *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) GetName() string {
	if o == nil {
		var ret string
		return ret
	}

	return o.Name
}

// GetNameOk returns a tuple with the Name field value
// and a boolean to check if the value has been set.
func (o *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) GetNameOk() (*string, bool) {
	if o == nil {
		return nil, false
	}
	return &o.Name, true
}

// SetName sets field value
func (o *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) SetName(v string) {
	o.Name = v
}

// GetSteps returns the Steps field value if set, zero value otherwise.
func (o *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) GetSteps() []GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInnerStepsInner {
	if o == nil || o.Steps == nil {
		var ret []GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInnerStepsInner
		return ret
	}
	return o.Steps
}

// GetStepsOk returns a tuple with the Steps field value if set, nil otherwise
// and a boolean to check if the value has been set.
func (o *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) GetStepsOk() ([]GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInnerStepsInner, bool) {
	if o == nil || o.Steps == nil {
		return nil, false
	}
	return o.Steps, true
}

// HasSteps returns a boolean if a field has been set.
func (o *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) HasSteps() bool {
	if o != nil && o.Steps != nil {
		return true
	}

	return false
}

// SetSteps gets a reference to the given []GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInnerStepsInner and assigns it to the Steps field.
func (o *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) SetSteps(v []GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInnerStepsInner) {
	o.Steps = v
}

func (o GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) MarshalJSON() ([]byte, error) {
	toSerialize := map[string]interface{}{}
	if true {
		toSerialize["name"] = o.Name
	}
	if o.Steps != nil {
		toSerialize["steps"] = o.Steps
	}
	return json.Marshal(toSerialize)
}

type NullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner struct {
	value *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner
	isSet bool
}

func (v NullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) Get() *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner {
	return v.value
}

func (v *NullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) Set(val *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) {
	v.value = val
	v.isSet = true
}

func (v NullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) IsSet() bool {
	return v.isSet
}

func (v *NullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) Unset() {
	v.value = nil
	v.isSet = false
}

func NewNullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner(val *GetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) *NullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner {
	return &NullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner{value: val, isSet: true}
}

func (v NullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) MarshalJSON() ([]byte, error) {
	return json.Marshal(v.value)
}

func (v *NullableGetAnalyzedRecipeInstructions200ResponseParsedInstructionsInner) UnmarshalJSON(src []byte) error {
	v.isSet = true
	return json.Unmarshal(src, &v.value)
}


