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

#include "OAIGuessNutritionByDishName_200_response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIGuessNutritionByDishName_200_response::OAIGuessNutritionByDishName_200_response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGuessNutritionByDishName_200_response::OAIGuessNutritionByDishName_200_response() {
    this->initializeModel();
}

OAIGuessNutritionByDishName_200_response::~OAIGuessNutritionByDishName_200_response() {}

void OAIGuessNutritionByDishName_200_response::initializeModel() {

    m_calories_isSet = false;
    m_calories_isValid = false;

    m_carbs_isSet = false;
    m_carbs_isValid = false;

    m_fat_isSet = false;
    m_fat_isValid = false;

    m_protein_isSet = false;
    m_protein_isValid = false;

    m_recipes_used_isSet = false;
    m_recipes_used_isValid = false;
}

void OAIGuessNutritionByDishName_200_response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGuessNutritionByDishName_200_response::fromJsonObject(QJsonObject json) {

    m_calories_isValid = ::OpenAPI::fromJsonValue(calories, json[QString("calories")]);
    m_calories_isSet = !json[QString("calories")].isNull() && m_calories_isValid;

    m_carbs_isValid = ::OpenAPI::fromJsonValue(carbs, json[QString("carbs")]);
    m_carbs_isSet = !json[QString("carbs")].isNull() && m_carbs_isValid;

    m_fat_isValid = ::OpenAPI::fromJsonValue(fat, json[QString("fat")]);
    m_fat_isSet = !json[QString("fat")].isNull() && m_fat_isValid;

    m_protein_isValid = ::OpenAPI::fromJsonValue(protein, json[QString("protein")]);
    m_protein_isSet = !json[QString("protein")].isNull() && m_protein_isValid;

    m_recipes_used_isValid = ::OpenAPI::fromJsonValue(recipes_used, json[QString("recipesUsed")]);
    m_recipes_used_isSet = !json[QString("recipesUsed")].isNull() && m_recipes_used_isValid;
}

QString OAIGuessNutritionByDishName_200_response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGuessNutritionByDishName_200_response::asJsonObject() const {
    QJsonObject obj;
    if (calories.isSet()) {
        obj.insert(QString("calories"), ::OpenAPI::toJsonValue(calories));
    }
    if (carbs.isSet()) {
        obj.insert(QString("carbs"), ::OpenAPI::toJsonValue(carbs));
    }
    if (fat.isSet()) {
        obj.insert(QString("fat"), ::OpenAPI::toJsonValue(fat));
    }
    if (protein.isSet()) {
        obj.insert(QString("protein"), ::OpenAPI::toJsonValue(protein));
    }
    if (m_recipes_used_isSet) {
        obj.insert(QString("recipesUsed"), ::OpenAPI::toJsonValue(recipes_used));
    }
    return obj;
}

OAIGuessNutritionByDishName_200_response_calories OAIGuessNutritionByDishName_200_response::getCalories() const {
    return calories;
}
void OAIGuessNutritionByDishName_200_response::setCalories(const OAIGuessNutritionByDishName_200_response_calories &calories) {
    this->calories = calories;
    this->m_calories_isSet = true;
}

bool OAIGuessNutritionByDishName_200_response::is_calories_Set() const{
    return m_calories_isSet;
}

bool OAIGuessNutritionByDishName_200_response::is_calories_Valid() const{
    return m_calories_isValid;
}

OAIGuessNutritionByDishName_200_response_calories OAIGuessNutritionByDishName_200_response::getCarbs() const {
    return carbs;
}
void OAIGuessNutritionByDishName_200_response::setCarbs(const OAIGuessNutritionByDishName_200_response_calories &carbs) {
    this->carbs = carbs;
    this->m_carbs_isSet = true;
}

bool OAIGuessNutritionByDishName_200_response::is_carbs_Set() const{
    return m_carbs_isSet;
}

bool OAIGuessNutritionByDishName_200_response::is_carbs_Valid() const{
    return m_carbs_isValid;
}

OAIGuessNutritionByDishName_200_response_calories OAIGuessNutritionByDishName_200_response::getFat() const {
    return fat;
}
void OAIGuessNutritionByDishName_200_response::setFat(const OAIGuessNutritionByDishName_200_response_calories &fat) {
    this->fat = fat;
    this->m_fat_isSet = true;
}

bool OAIGuessNutritionByDishName_200_response::is_fat_Set() const{
    return m_fat_isSet;
}

bool OAIGuessNutritionByDishName_200_response::is_fat_Valid() const{
    return m_fat_isValid;
}

OAIGuessNutritionByDishName_200_response_calories OAIGuessNutritionByDishName_200_response::getProtein() const {
    return protein;
}
void OAIGuessNutritionByDishName_200_response::setProtein(const OAIGuessNutritionByDishName_200_response_calories &protein) {
    this->protein = protein;
    this->m_protein_isSet = true;
}

bool OAIGuessNutritionByDishName_200_response::is_protein_Set() const{
    return m_protein_isSet;
}

bool OAIGuessNutritionByDishName_200_response::is_protein_Valid() const{
    return m_protein_isValid;
}

qint32 OAIGuessNutritionByDishName_200_response::getRecipesUsed() const {
    return recipes_used;
}
void OAIGuessNutritionByDishName_200_response::setRecipesUsed(const qint32 &recipes_used) {
    this->recipes_used = recipes_used;
    this->m_recipes_used_isSet = true;
}

bool OAIGuessNutritionByDishName_200_response::is_recipes_used_Set() const{
    return m_recipes_used_isSet;
}

bool OAIGuessNutritionByDishName_200_response::is_recipes_used_Valid() const{
    return m_recipes_used_isValid;
}

bool OAIGuessNutritionByDishName_200_response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (calories.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (carbs.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (fat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (protein.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_recipes_used_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGuessNutritionByDishName_200_response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_calories_isValid && m_carbs_isValid && m_fat_isValid && m_protein_isValid && m_recipes_used_isValid && true;
}

} // namespace OpenAPI
