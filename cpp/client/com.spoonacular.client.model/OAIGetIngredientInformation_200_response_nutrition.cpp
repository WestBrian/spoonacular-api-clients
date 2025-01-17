/**
 * spoonacular API
 * The spoonacular Nutrition, Recipe, and Food API allows you to access over 380,000 recipes, thousands of ingredients, 800,000 food products, and 100,000 menu items. Our food ontology and semantic recipe search engine makes it possible to search for recipes using natural language queries, such as \"gluten free brownies without sugar\" or \"low fat vegan cupcakes.\" You can automatically calculate the nutritional information for any recipe, analyze recipe costs, visualize ingredient lists, find recipes for what's in your fridge, find recipes based on special diets, nutritional requirements, or favorite ingredients, classify recipes into types and cuisines, convert ingredient amounts, or even compute an entire meal plan. With our powerful API, you can create many kinds of food and especially nutrition apps.  Special diets/dietary requirements currently available include: vegan, vegetarian, pescetarian, gluten free, grain free, dairy free, high protein, whole 30, low sodium, low carb, Paleo, ketogenic, FODMAP, and Primal.
 *
 * The version of the OpenAPI document: 1.1
 * Contact: mail@spoonacular.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIGetIngredientInformation_200_response_nutrition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGetIngredientInformation_200_response_nutrition::OAIGetIngredientInformation_200_response_nutrition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGetIngredientInformation_200_response_nutrition::OAIGetIngredientInformation_200_response_nutrition() {
    this->initializeModel();
}

OAIGetIngredientInformation_200_response_nutrition::~OAIGetIngredientInformation_200_response_nutrition() {}

void OAIGetIngredientInformation_200_response_nutrition::initializeModel() {

    m_nutrients_isSet = false;
    m_nutrients_isValid = false;

    m_properties_isSet = false;
    m_properties_isValid = false;

    m_caloric_breakdown_isSet = false;
    m_caloric_breakdown_isValid = false;

    m_weight_per_serving_isSet = false;
    m_weight_per_serving_isValid = false;
}

void OAIGetIngredientInformation_200_response_nutrition::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGetIngredientInformation_200_response_nutrition::fromJsonObject(QJsonObject json) {

    m_nutrients_isValid = ::OpenAPI::fromJsonValue(nutrients, json[QString("nutrients")]);
    m_nutrients_isSet = !json[QString("nutrients")].isNull() && m_nutrients_isValid;

    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    m_properties_isSet = !json[QString("properties")].isNull() && m_properties_isValid;

    m_caloric_breakdown_isValid = ::OpenAPI::fromJsonValue(caloric_breakdown, json[QString("caloricBreakdown")]);
    m_caloric_breakdown_isSet = !json[QString("caloricBreakdown")].isNull() && m_caloric_breakdown_isValid;

    m_weight_per_serving_isValid = ::OpenAPI::fromJsonValue(weight_per_serving, json[QString("weightPerServing")]);
    m_weight_per_serving_isSet = !json[QString("weightPerServing")].isNull() && m_weight_per_serving_isValid;
}

QString OAIGetIngredientInformation_200_response_nutrition::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGetIngredientInformation_200_response_nutrition::asJsonObject() const {
    QJsonObject obj;
    if (nutrients.size() > 0) {
        obj.insert(QString("nutrients"), ::OpenAPI::toJsonValue(nutrients));
    }
    if (properties.size() > 0) {
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    }
    if (caloric_breakdown.isSet()) {
        obj.insert(QString("caloricBreakdown"), ::OpenAPI::toJsonValue(caloric_breakdown));
    }
    if (weight_per_serving.isSet()) {
        obj.insert(QString("weightPerServing"), ::OpenAPI::toJsonValue(weight_per_serving));
    }
    return obj;
}

QSet<OAIParseIngredients_200_response_inner_nutrition_nutrients_inner> OAIGetIngredientInformation_200_response_nutrition::getNutrients() const {
    return nutrients;
}
void OAIGetIngredientInformation_200_response_nutrition::setNutrients(const QSet<OAIParseIngredients_200_response_inner_nutrition_nutrients_inner> &nutrients) {
    this->nutrients = nutrients;
    this->m_nutrients_isSet = true;
}

bool OAIGetIngredientInformation_200_response_nutrition::is_nutrients_Set() const{
    return m_nutrients_isSet;
}

bool OAIGetIngredientInformation_200_response_nutrition::is_nutrients_Valid() const{
    return m_nutrients_isValid;
}

QSet<OAIParseIngredients_200_response_inner_nutrition_properties_inner> OAIGetIngredientInformation_200_response_nutrition::getProperties() const {
    return properties;
}
void OAIGetIngredientInformation_200_response_nutrition::setProperties(const QSet<OAIParseIngredients_200_response_inner_nutrition_properties_inner> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool OAIGetIngredientInformation_200_response_nutrition::is_properties_Set() const{
    return m_properties_isSet;
}

bool OAIGetIngredientInformation_200_response_nutrition::is_properties_Valid() const{
    return m_properties_isValid;
}

OAIParseIngredients_200_response_inner_nutrition_caloricBreakdown OAIGetIngredientInformation_200_response_nutrition::getCaloricBreakdown() const {
    return caloric_breakdown;
}
void OAIGetIngredientInformation_200_response_nutrition::setCaloricBreakdown(const OAIParseIngredients_200_response_inner_nutrition_caloricBreakdown &caloric_breakdown) {
    this->caloric_breakdown = caloric_breakdown;
    this->m_caloric_breakdown_isSet = true;
}

bool OAIGetIngredientInformation_200_response_nutrition::is_caloric_breakdown_Set() const{
    return m_caloric_breakdown_isSet;
}

bool OAIGetIngredientInformation_200_response_nutrition::is_caloric_breakdown_Valid() const{
    return m_caloric_breakdown_isValid;
}

OAIParseIngredients_200_response_inner_nutrition_weightPerServing OAIGetIngredientInformation_200_response_nutrition::getWeightPerServing() const {
    return weight_per_serving;
}
void OAIGetIngredientInformation_200_response_nutrition::setWeightPerServing(const OAIParseIngredients_200_response_inner_nutrition_weightPerServing &weight_per_serving) {
    this->weight_per_serving = weight_per_serving;
    this->m_weight_per_serving_isSet = true;
}

bool OAIGetIngredientInformation_200_response_nutrition::is_weight_per_serving_Set() const{
    return m_weight_per_serving_isSet;
}

bool OAIGetIngredientInformation_200_response_nutrition::is_weight_per_serving_Valid() const{
    return m_weight_per_serving_isValid;
}

bool OAIGetIngredientInformation_200_response_nutrition::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (nutrients.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (properties.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (caloric_breakdown.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (weight_per_serving.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGetIngredientInformation_200_response_nutrition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_nutrients_isValid && m_properties_isValid && m_caloric_breakdown_isValid && m_weight_per_serving_isValid && true;
}

} // namespace OpenAPI
